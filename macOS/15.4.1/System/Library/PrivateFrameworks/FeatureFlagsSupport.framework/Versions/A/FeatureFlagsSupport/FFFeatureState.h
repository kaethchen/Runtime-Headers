@class NSDictionary, NSString;

@interface FFFeatureState : NSObject <NSCopying>

@property (retain, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *feature;
@property (nonatomic) long long value;
@property (retain, nonatomic) NSString *phase;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSString *disclosurerequired;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 feature:(id)a1 value:(long long)a2;
- (id)initWithDomain:(id)a0 feature:(id)a1 value:(long long)a2 buildVersion:(id)a3;
- (id)initWithDomain:(id)a0 feature:(id)a1 value:(long long)a2 phase:(id)a3 disclosureRequired:(id)a4 attributes:(id)a5;
- (id)initWithDomain:(id)a0 feature:(id)a1 value:(long long)a2 phase:(id)a3 disclosureRequired:(id)a4 attributes:(id)a5 buildVersion:(id)a6;

@end
