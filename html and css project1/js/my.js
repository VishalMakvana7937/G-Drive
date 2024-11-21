const header = document.querySelector(".sticky");
const toggleClass = "sticky";

window.addEventListener("scroll", () => {
  const currentScroll = window.pageYOffset;
  if (currentScroll > 250) {
    header.classList.add(toggleClass);
  } else {
    header.classList.remove(toggleClass);
  }
});
