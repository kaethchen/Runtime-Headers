@class NSString, ABGroup;

@interface ABGroupCopyPasteboardData : NSObject <ABPasteboardData> {
    ABGroup *_group;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)writeToPasteboard:(id)a0;
- (id)initWithGroup:(id)a0;

@end
