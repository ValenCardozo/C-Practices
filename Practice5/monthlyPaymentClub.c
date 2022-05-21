//
//  Obtain the amount to pay in the club.
//
//  Created by Valentin Cardozo on 12/02/2022.
//

#include <stdio.h>

struct TPartner {
	float monthly;
	int antique;
};



struct TPartner whatToPay(struct TPartner partner);

int main()
{
	struct TPartner person;

	printf("How much I have to pay to the club this month? \n");
	printf("Quota \n");
	scanf("%f", &person.monthly);
	printf("Antique \n");
	scanf("%d", &person.antique);

	person = whatToPay(person);

	printf("Pay to the club the amount of %f", person.monthly);
}

struct TPartner whatToPay(struct TPartner partner)
{
	int toPay;

	toPay = partner.monthly;

	if (partner.antique > 5) {
		toPay = partner.monthly  - partner.monthly * 0.08;
	}

	partner.monthly = toPay;

	return partner;
}