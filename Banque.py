somme = float(input("veuillez saisir ..."))

annee = int(input("Veuillez saisir annee"))

if (somme < 1500):
    for i in range(annee):
        somme = somme * 1.01
t.append(int(input("")))
if (somme >= 2500):
    for i in range(annee):
        somme = somme * 1.02

print("la somme est ", round(somme,2))
