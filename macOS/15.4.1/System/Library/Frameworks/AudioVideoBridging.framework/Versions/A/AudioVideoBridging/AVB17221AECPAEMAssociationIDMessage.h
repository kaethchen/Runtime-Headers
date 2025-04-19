@interface AVB17221AECPAEMAssociationIDMessage : AVB17221AECPAEMMessage

@property (nonatomic) unsigned long long associationID;

+ (id)keyPathsForValuesAffectingAssociationID;

- (unsigned long long)associationID;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setAssociationID:(unsigned long long)a0;

@end
