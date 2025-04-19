@class NSArray;

@interface MailUI.FeedbackViewModelHelper : NSObject {
    void /* unknown type, empty encoding */ selectedMailboxes;
}

@property (nonatomic) void /* unknown type, empty encoding */ selectedBucket;
@property (nonatomic, copy) NSArray *selectedMailboxes;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSelectedBucket:(long long)a0 selectedMailboxes:(id)a1;

@end
