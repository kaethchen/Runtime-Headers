@class NSString, NSArray;

@interface PRLexiconGroup : NSObject

@property (readonly, copy) NSString *localization;
@property (readonly, copy) NSArray *lexicons;
@property (readonly) BOOL cachedOnly;

- (void)dealloc;
- (id)description;
- (id)initWithLocalization:(id)a0 lexicons:(id)a1 cachedOnly:(BOOL)a2;

@end
