@class NSString;

@interface ClearBrowsingDataInterval : NSObject

@property (readonly) NSString *descriptionOfInterval;
@property (readonly) NSString *identifier;
@property (copy, nonatomic) id /* block */ dateAfterWhichDataShouldBeClearedBlock;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDescription:(id)a0 identifier:(id)a1 dateAfterWhichDataShouldBeClearedBlock:(id /* block */)a2;

@end
