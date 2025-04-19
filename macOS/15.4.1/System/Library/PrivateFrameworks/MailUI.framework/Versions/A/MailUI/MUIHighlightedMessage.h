@class NSString;

@interface MUIHighlightedMessage : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_sender;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ topLine;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ messageListItem;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isGeneratedSummary;
@property (nonatomic, copy) NSString *sender;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTopLine:(id)a0 isGeneratedSummary:(BOOL)a1 messageListItem:(id)a2;

@end
