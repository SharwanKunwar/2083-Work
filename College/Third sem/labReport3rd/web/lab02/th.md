# 🎨 CSS — Introduction, Types & Selectors

CSS (**Cascading Style Sheets**) controls the visual presentation of HTML — colors, fonts, layout, spacing, and more.

---

## 📌 Table of Contents
1. [CSS Syntax](#css-syntax)
2. [Types of CSS](#types-of-css)
3. [CSS Selectors](#css-selectors)
4. [Specificity](#specificity)

---

## CSS Syntax

```css
selector {
  property: value;
}
```
```css
h1 {
  color: navy;
  font-size: 32px;
}
```

---

## Types of CSS

### 1. Inline CSS
Written directly on the element using the `style` attribute.

```html
<p style="color: red; font-size: 16px;">Hello</p>
```
> ✅ Quick fix &nbsp;|&nbsp; ❌ Hard to maintain

---

### 2. Internal CSS
Written inside a `<style>` tag in the `<head>`.

```html
<head>
  <style>
    p { color: blue; }
  </style>
</head>
```
> ✅ Single page styles &nbsp;|&nbsp; ❌ Not reusable across pages

---

### 3. External CSS
Written in a separate `.css` file and linked via `<link>`.

```html
<head>
  <link rel="stylesheet" href="styles.css">
</head>
```
```css
/* styles.css */
p { color: green; }
```
> ✅ Reusable, cached, clean &nbsp;|&nbsp; ❌ Extra HTTP request

---

### Comparison

| Feature | Inline | Internal | External |
|---|:---:|:---:|:---:|
| Scope | Element | Page | All pages |
| Reusable | ❌ | ❌ | ✅ |
| Maintainable | ❌ | ⚠️ | ✅ |
| Best For | Quick fixes | Single pages | Real projects |

---

## CSS Selectors

### 1. Universal `*`
Targets every element.
```css
* { margin: 0; padding: 0; }
```

---

### 2. Element
Targets all elements of a tag type.
```css
p { color: gray; }
h1 { font-size: 2rem; }
```

---

### 3. Class `.`
Reusable — multiple elements can share a class.
```css
.btn { background: blue; color: white; padding: 8px 16px; }
```
```html
<button class="btn">Click</button>
<a class="btn">Link</a>
```

---

### 4. ID `#`
Unique — only one element per page.
```css
#header { background: #333; color: white; }
```
```html
<header id="header">My Site</header>
```

---

### 5. Group `,`
Apply same styles to multiple selectors.
```css
h1, h2, h3 { font-family: Georgia; color: #222; }
```

---

### 6. Descendant ` `
Targets elements nested **anywhere** inside a parent.
```css
nav a { color: white; }  /* any <a> inside <nav> */
```

---

### 7. Child `>`
Targets **direct children only**.
```css
ul > li { color: blue; }  /* only top-level <li> */
```

---

### 8. Adjacent Sibling `+`
Targets the element **immediately after** another.
```css
h1 + p { font-style: italic; }  /* first <p> after <h1> */
```

---

### 9. General Sibling `~`
Targets **all siblings** after an element.
```css
h1 ~ p { color: gray; }  /* all <p> after <h1> */
```

---

### 10. Attribute
Targets elements based on attributes.

```css
input[required]     { border: 2px solid red; }   /* has attribute */
input[type="email"] { border-color: blue; }       /* exact value */
a[href^="https"]    { color: green; }             /* starts with */
a[href$=".pdf"]     { color: orange; }            /* ends with */
a[href*="github"]   { font-weight: bold; }        /* contains */
```

---

### 11. Pseudo-classes
Targets elements in a **specific state or position**.

```css
/* States */
a:hover   { color: red; }         /* mouse over */
a:visited { color: purple; }      /* already visited */
input:focus { outline: 2px solid blue; }

/* Structure */
li:first-child  { font-weight: bold; }
li:last-child   { border: none; }
li:nth-child(2) { color: red; }          /* 2nd item */
tr:nth-child(even) { background: #f2f2f2; } /* zebra rows */

/* Negation */
button:not(.disabled) { cursor: pointer; }

/* Forms */
input:checked  { accent-color: green; }
input:disabled { opacity: 0.5; }
input:valid    { border-color: green; }
input:invalid  { border-color: red; }
```

---

### 12. Pseudo-elements
Targets a **specific part** of an element.

```css
p::first-letter { font-size: 2rem; color: red; }  /* drop cap */
p::first-line   { font-weight: bold; }

.note::before { content: "📌 "; }   /* insert before */
.note::after  { content: " ✔";  }   /* insert after */

::selection   { background: #3498db; color: white; } /* selected text */
input::placeholder { color: #aaa; font-style: italic; }
```

---

## Specificity

When rules conflict, the **highest specificity wins**.

| Selector | Points |
|---|---|
| `*` | 0 |
| `p` (element) | 1 |
| `.class` | 10 |
| `#id` | 100 |
| `style=""` (inline) | 1000 |
| `!important` | Overrides all ⚠️ |

```css
p            { color: black; }   /* 1 */
.highlight   { color: yellow; }  /* 10 */
#main p      { color: blue; }    /* 101 → WINS */
```

> 💡 Avoid `!important` — prefer higher specificity or better structure.

---

## Quick Reference

```css
*            {}   /* Universal */
p            {}   /* Element */
.class       {}   /* Class */
#id          {}   /* ID */
h1, h2       {}   /* Group */
div p        {}   /* Descendant */
div > p      {}   /* Direct child */
h1 + p       {}   /* Adjacent sibling */
h1 ~ p       {}   /* General sibling */
[type="text"]{}   /* Attribute */
a:hover      {}   /* Pseudo-class */
p::before    {}   /* Pseudo-element */
```

---

> 📚 [MDN CSS Docs](https://developer.mozilla.org/en-US/docs/Web/CSS) &nbsp;|&nbsp; [CSS Tricks](https://css-tricks.com) &nbsp;|&nbsp; [W3Schools](https://www.w3schools.com/css/)