@class NSMutableArray;

@interface _NSRuleEditorViewUnboundRowHolder : NSObject <NSCoding> {
    NSMutableArray *boundArray;
}

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
