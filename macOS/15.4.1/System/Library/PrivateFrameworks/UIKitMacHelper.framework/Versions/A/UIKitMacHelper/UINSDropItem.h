@class NSArray, NSItemProvider;

@interface UINSDropItem : NSObject <UINSDropItem>

@property (readonly, copy, nonatomic) NSArray *typeIdentifiers;
@property (readonly, nonatomic) NSItemProvider *itemProvider;

- (void).cxx_destruct;
- (id)initWithItemProvider:(id)a0;

@end
