@interface AVBOrganisationIdentifierLookup : NSObject

+ (void)loadData;
+ (id)_manufacturerForEUI48:(unsigned long long)a0 ouiType:(long long *)a1 uniquePart:(unsigned long long *)a2;
+ (unsigned long long)_ouiForEUI48:(unsigned long long)a0 ouiType:(long long *)a1 uniquePart:(unsigned long long *)a2;
+ (unsigned long long)organisationIdentifierForEUI48:(unsigned long long)a0 ouiType:(long long *)a1 uniquePart:(unsigned long long *)a2;
+ (unsigned long long)organisationIdentifierForEUI64:(unsigned long long)a0 ouiType:(long long *)a1 uniquePart:(unsigned long long *)a2 expandedFromEUI48:(BOOL *)a3;
+ (id)organisationNameForEUI48:(unsigned long long)a0;
+ (id)organisationNameForEUI48:(unsigned long long)a0 ouiType:(long long *)a1;
+ (id)organisationNameForEUI48:(unsigned long long)a0 ouiType:(long long *)a1 uniquePart:(unsigned long long *)a2;
+ (id)organisationNameForEUI64:(unsigned long long)a0;
+ (id)organisationNameForEUI64:(unsigned long long)a0 ouiType:(long long *)a1;
+ (id)organisationNameForEUI64:(unsigned long long)a0 ouiType:(long long *)a1 uniquePart:(unsigned long long *)a2;
+ (id)organisationNameForEUI64:(unsigned long long)a0 ouiType:(long long *)a1 uniquePart:(unsigned long long *)a2 expandedFromEUI48:(BOOL *)a3;
+ (id)organisationNameForMACAddress:(id)a0;
+ (id)organisationNameForMACAddress:(id)a0 ouiType:(long long *)a1;
+ (id)organisationNameForMACAddress:(id)a0 ouiType:(long long *)a1 uniquePart:(unsigned long long *)a2;

@end
