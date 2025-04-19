@class NSString;

@interface GKAdditions_NSAlert_SuperDelegate : NSObject <NSAlertDelegate> {
    id real_delegate;
    long long tag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
