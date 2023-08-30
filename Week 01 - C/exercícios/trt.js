const createPyramid = n => Array.from({ length: n }, (_, i) => '#'.repeat(i + 1)).forEach(console.log);

createPyramid(12);
