@class NSString, CHSControlIdentity;

@interface _CHSControlConfigurationReference : NSObject <CHSControlConfigurationReference> {
    CHSControlIdentity *_controlIdentity;
    NSString *_uniqueIdentifier;
}

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) CHSControlIdentity *controlIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithControlIdentity:(id)a0 uniqueIdentifier:(id)a1;

@end
