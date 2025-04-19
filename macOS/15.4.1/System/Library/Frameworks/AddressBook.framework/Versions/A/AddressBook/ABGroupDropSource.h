@class ABRecordContext;

@interface ABGroupDropSource : NSObject

@property (readonly) ABRecordContext *recordContext;
@property (readonly) BOOL isLocalToWindow;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRecordContext:(id)a0 isLocalToWindow:(BOOL)a1;

@end
