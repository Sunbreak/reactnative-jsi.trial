export function multiply(a: number, b: number): Promise<number> {
  return new Promise<number>((resolve) => resolve(global.multiply(a, b)));
}