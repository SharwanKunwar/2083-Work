package com.unpredictable.GagetsStore.entities;

import com.fasterxml.jackson.annotation.JsonIgnore;
import jakarta.persistence.*;
import jakarta.validation.constraints.DecimalMin;
import jakarta.validation.constraints.Min;
import jakarta.validation.constraints.NotBlank;
import jakarta.validation.constraints.NotNull;
import lombok.*;

import java.math.BigDecimal;
import java.util.List;

@Entity
@Table(name="products")
@Getter
@Setter
@Builder
@AllArgsConstructor
@NoArgsConstructor
public class Product {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Long id;

    @NotBlank(message = "Product name is required")
    @Column(nullable = false)
    private String name;

    private String description;

    private String category;

    @NotNull(message = "price is required")
    @DecimalMin(value = "0.0", inclusive = false, message="Price must be grater then 0")
    @Column(nullable = false)
    private BigDecimal price;

    @NotNull(message = "Stock quantity is required")
    @Min(value = 0, message = "Stock cannot be less then 0")
    @Column(name = "stock_quantity", nullable = false)
    private Integer stockQuantity;


    // Todo: relations

    @JsonIgnore
    @OneToMany(mappedBy = "product")
    private List<OrderItem> orderItems;
}
