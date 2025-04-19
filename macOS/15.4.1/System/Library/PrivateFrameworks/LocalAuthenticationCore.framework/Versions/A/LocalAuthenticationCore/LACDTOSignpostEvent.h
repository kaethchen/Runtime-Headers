@class LACSignpostEvent;

@interface LACDTOSignpostEvent : LACSignpostEvent

@property (class, readonly, nonatomic) LACSignpostEvent *environmentUpdateWillStart;
@property (class, readonly, nonatomic) LACSignpostEvent *environmentUpdateDidFinish;
@property (class, readonly, nonatomic) LACSignpostEvent *locationStatusQueryWillStart;
@property (class, readonly, nonatomic) LACSignpostEvent *locationStatusQueryDidFinish;
@property (class, readonly, nonatomic) LACSignpostEvent *lostModeQueryWillStart;
@property (class, readonly, nonatomic) LACSignpostEvent *lostModeQueryDidFinish;
@property (class, readonly, nonatomic) LACSignpostEvent *repairStatusQueryWillStart;
@property (class, readonly, nonatomic) LACSignpostEvent *repairStatusQueryDidFinish;

@end
