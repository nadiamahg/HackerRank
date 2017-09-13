import Foundation

let mealCost = Double( readLine() ?? "" ) ?? 0
let tip = Double(readLine() ?? "") ?? 0
let tax = Double(readLine() ?? "") ?? 0

var totalCost = Int(round(mealCost + ((tip/100) * mealCost) + ((tax/100) * mealCost)))

print("The total meal cost is \(totalCost) dollars.")

