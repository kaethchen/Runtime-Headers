@class NSArray;

@interface NSSuggestionItemResponse : NSObject <NSCopying>

@property (copy) NSArray *itemSections;
@property long long phase;
@property long long preferredHighlight;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithItemSections:(id)a0;
- (id)initWithItems:(id)a0;

@end
