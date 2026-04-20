package Test01;

import java.util.*;
import java.util.stream.Stream;

public class Operations extends OperationsHandler{

    @Override
    public void listDemonstration() {
        List<Integer> ages = new ArrayList<>();
        ages.add(20);
        ages.add(30);
        ages.add(22);
        ages.add(23);

        // printing using For-loop
        for(int i=0; i<ages.size(); i++){
            System.out.println(ages.get(i));
        }

        // Printing using stream
//        ages.stream().forEach(System.out::println);

    }

    @Override
    public void mapDemonstration() {

        //we are going to store name and age in it
        Map<String,Integer> friends = new HashMap<>();

        friends.put("Sharwan", 23);
        friends.put("Parbesh", 24);
        friends.put("Roshan", 23);
        friends.put("Gyan", 23);


//        for(Object ls : friends.entrySet()){
//            System.out.println(ls);
//        }

        //Printing using for each loop
        for(Map.Entry<String, Integer> friend : friends.entrySet()){
            System.out.println(friend.getKey() +" : "+ friend.getValue());
        }
    }

    @Override
    public void setDemonstration() {

        Set<Integer> age = new HashSet<>();
        age.add(22);
        age.add(23);
        age.add(22);
        age.add(53);
        age.add(55);

        // Printing using stream forEach loop
        age.stream().forEach(System.out::println);

    }

    @Override
    public void immutableListDemonstration() {

    }
}
