@class NSString, NSNumber, NSSet;

@interface GKCompatibilityEntryInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *adamID;
@property (nonatomic) long long platform;
@property (retain, nonatomic) NSSet *versions;
@property (retain, nonatomic) NSSet *shortVersions;

+ (id)secureCodedPropertyKeys;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
