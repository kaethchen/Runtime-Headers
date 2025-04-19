@class NSArray, SGTSuggesterReserved, SGTQueryGenius, SGTCategory;
@protocol SGTSuggesterDelegate;

@interface SGTSuggester : NSObject {
    SGTSuggesterReserved *_reserved;
}

@property (readonly) BOOL canHaveStaticSuggestions;
@property (readonly) NSArray *staticSuggestions;
@property (weak) id<SGTSuggesterDelegate> delegate;
@property (retain) SGTQueryGenius *genius;
@property (retain) SGTCategory *category;

+ (id)suggestersForContainerAtPath:(id)a0;
+ (id)suggestersForFiles;
+ (id)suggestersForMails;
+ (id)suggestersForMailsUsingSearchQueryIndex:(long long)a0;
+ (id)suggestersForMailsWithMailLibraryPath:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_identifier;
- (void)setInput:(id)a0;
- (void)_searchFieldDidValidateSuggestion:(id)a0;
- (id)_staticSuggestionDisplayNames;
- (id)_suggestionWithDisplayName:(id)a0 attributeNames:(id)a1 values:(id)a2 scope:(long long)a3 representedObjectAsPlist:(id)a4;
- (void)setInput:(id)a0 withGroup:(id)a1;

@end
