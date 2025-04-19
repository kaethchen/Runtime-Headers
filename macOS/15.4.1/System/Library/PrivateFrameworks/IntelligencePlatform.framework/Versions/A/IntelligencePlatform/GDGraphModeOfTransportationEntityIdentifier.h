@class NSString;

@interface GDGraphModeOfTransportationEntityIdentifier : GDEntityIdentifier <GDGraphEntityIdentifier>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)graphModeOfTransportationFromContext:(id)a0 error:(id *)a1;
- (id)initByCastingFrom:(id)a0;
- (id)initFromGDEntityIdentifier:(id)a0;
- (id)initWithEntityIdentifier:(id)a0;

@end
