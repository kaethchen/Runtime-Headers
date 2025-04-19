@class VKBaseTextPosition;

@interface VKBaseTextRange : NSObject

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) VKBaseTextPosition *start;
@property (readonly, nonatomic) VKBaseTextPosition *end;

- (void).cxx_destruct;

@end
