@interface CNUISaveNonCuratedValueCommandFactory : NSObject

+ (id)commandWithContactStore:(id)a0 contact:(id)a1 isContactMeContact:(BOOL)a2 isContactReadOnly:(BOOL)a3 isContactCurated:(BOOL)a4 nonCuratedValueToSave:(id)a5 forKey:(id)a6 containerIdentifier:(id)a7 ignoresGuardianRestrictions:(BOOL)a8;

@end
