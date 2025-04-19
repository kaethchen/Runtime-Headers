@interface AVB17221AEMDescriptorCount : AVB17221AEMObject <NSCopying>

@property unsigned short descriptorType;
@property unsigned short count;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugLogStringWithIndentation:(id)a0;

@end
