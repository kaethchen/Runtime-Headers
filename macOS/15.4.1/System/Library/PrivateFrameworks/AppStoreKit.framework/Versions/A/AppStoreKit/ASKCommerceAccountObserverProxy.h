@class NSString, CKAccountStore;
@protocol CKAccountObserver;

@interface ASKCommerceAccountObserverProxy : NSObject <CKAccountObserver>

@property (readonly, nonatomic) CKAccountStore *accountStore;
@property (readonly, weak, nonatomic) id<CKAccountObserver> target;
@property (readonly, nonatomic) id changeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
