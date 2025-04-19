@class NSUserDefaults, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SGTRecentsSuggesterReserved : NSObject {
    NSMutableArray *recentSuggestions;
    NSMutableArray *recentSuggestionValues;
    NSObject<OS_dispatch_queue> *queue;
    long long searchID;
    NSString *saveName;
    long long maxRecents;
    NSUserDefaults *defaults;
    BOOL global;
    BOOL isSaving;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
