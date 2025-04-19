@class NSString, CNContainerPropertyDescription;

@interface CNContainerUpdate : NSObject <CNContainerUpdate> {
    CNContainerPropertyDescription *_property;
    id _value;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updateWithValue:(id)a0 property:(id)a1;

- (void).cxx_destruct;
- (id)value;
- (id)property;
- (id)initWithProperty:(id)a0 value:(id)a1;
- (void)applyToMutableContainer:(id)a0;

@end
