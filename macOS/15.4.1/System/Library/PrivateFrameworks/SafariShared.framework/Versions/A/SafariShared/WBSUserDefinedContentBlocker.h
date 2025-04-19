@class NSString, NSArray;

@interface WBSUserDefinedContentBlocker : NSObject

@property (nonatomic) long long databaseID;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *host;
@property (nonatomic) BOOL excludeGlobalContentBlockers;
@property (retain, nonatomic) NSArray *actions;

- (void).cxx_destruct;

@end
