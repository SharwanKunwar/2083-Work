(() => {
  const detailsElements = Array.from(document.querySelectorAll('details'));

  detailsElements.forEach((item) => {
    item.addEventListener('toggle', () => {
      if (!item.open) return;
      detailsElements.forEach((other) => {
        if (other !== item) other.open = false;
      });
    });
  });
})();
