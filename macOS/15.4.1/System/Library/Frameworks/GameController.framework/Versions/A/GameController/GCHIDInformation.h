@class NSNumber, NSString, _GCControllerManagerAppClient;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface GCHIDInformation : NSObject <GCControllerHIDInfo> {
    _GCControllerManagerAppClient *_manager;
}

@property (readonly, copy) NSNumber *registryID;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setProperty:(id)a0 forKey:(id)a1;
- (void)setController:(id)a0;
- (id)initWithIdentifier:(id)a0 registryID:(id)a1;

@end
