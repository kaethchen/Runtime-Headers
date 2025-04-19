@class NSArray;

@interface USKXForm : NSObject

@property (readonly, nonatomic) BOOL resetsStack;
@property (readonly, nonatomic) NSArray *operations;

- (void).cxx_destruct;
- (id)initWithOperations:(id)a0 resetsStack:(BOOL)a1;

@end
