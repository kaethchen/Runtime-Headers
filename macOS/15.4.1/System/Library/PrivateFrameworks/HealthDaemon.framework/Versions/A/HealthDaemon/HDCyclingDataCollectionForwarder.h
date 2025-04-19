@class NSString;

@interface HDCyclingDataCollectionForwarder : NSObject <HDDataCollectionForwarder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)insertSamples:(id)a0 device:(id)a1 source:(id)a2;

@end
