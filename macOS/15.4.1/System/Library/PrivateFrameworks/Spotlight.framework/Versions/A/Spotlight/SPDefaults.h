@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SPDefaults : NSObject {
    long long _useCount;
    BOOL _showedFTE;
    BOOL _showedLearnMore;
    NSObject<OS_dispatch_queue> *_prefsQueue;
}

@property (getter=isSpotEnabled) BOOL spotEnabled;
@property (getter=isHighlightShownWithSpot) BOOL highlightShownWithSpot;
@property (getter=isDemoEnabled) BOOL demoEnabled;
@property BOOL didShowFTE;
@property (readonly) long long parsecMaxResults;
@property (readonly) long long parsecMaxBingResults;
@property (readonly) NSArray *parsecBlessedResults;
@property (readonly) NSString *spotlightExtraQueryFlags;
@property (readonly) long long maxResultsPerGroup;
@property (readonly) BOOL groupResults;
@property (readonly) BOOL customAppPreview;
@property (readonly) BOOL customFolderPreview;
@property (getter=isParsecEnabled) BOOL parsecEnabled;
@property (getter=isTTREnabled) BOOL ttrEnabled;
@property (getter=shouldReloadPrefs) BOOL reloadPrefs;
@property (getter=areSpotlightSuggestionsDisabled) BOOL spotlightSuggestionsDisabled;
@property (readonly, getter=isParsecAllowed) BOOL parsecAllowed;
@property (readonly) NSString *spotlightExtraQueryClause;
@property BOOL clearOnClose;
@property BOOL showedFTE;
@property BOOL showedLearnMore;
@property (readonly) BOOL firstUse;

+ (void)initialize;
+ (BOOL)isParsecEnabled;
+ (BOOL)getShowExtensionStatus;
+ (BOOL)isDeveloper;
+ (id)standardAppDefaults;

- (id)init;
- (void).cxx_destruct;
- (long long)useCount;
- (void)used;
- (void)_used;
- (void)prefsNotificationReceived:(id)a0;
- (void)reloadPrefs;

@end
