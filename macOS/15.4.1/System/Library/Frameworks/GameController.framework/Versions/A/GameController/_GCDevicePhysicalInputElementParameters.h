@class NSString, NSSet, GCDevicePhysicalInputSymbolDescription;

@interface _GCDevicePhysicalInputElementParameters : _GCDevicePhysicalInputViewParameters {
    NSString *_identifier;
    NSSet *_aliases;
    NSString *_localizedName;
    GCDevicePhysicalInputSymbolDescription *_symbol;
}

+ (id)parametersWithIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
