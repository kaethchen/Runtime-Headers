@class NSString, UTType;

@interface AVCustomRoutingActionItem : NSObject {
    NSString *_identifier;
}

@property (copy, nonatomic) UTType *type;
@property (copy, nonatomic) NSString *overrideTitle;

- (void)dealloc;
- (id)init;
- (id)identifier;
- (void)setIdentifier:(id)a0;

@end
