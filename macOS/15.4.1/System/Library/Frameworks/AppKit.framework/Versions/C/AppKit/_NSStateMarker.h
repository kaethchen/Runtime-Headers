@class NSColor, NSMapTable;

@interface _NSStateMarker : NSBindingSelectionMarker <NSCopying> {
    short _type;
    NSMapTable *_placeholderRegistry;
    NSMapTable *_cachedPlaceholderRegistry;
    NSColor *_textColor;
    unsigned long long _placeholderBindingsMask;
}

- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (id)copy;
- (id)description;
- (id)retain;
- (unsigned long long)retainCount;
- (id)valueForKey:(id)a0;
- (id)initWithType:(long long)a0;
- (unsigned long long)_hash;
- (short)_type;
- (id)defaultPlaceholderForBinding:(id)a0 onObjectClass:(Class)a1;
- (id)defaultTextColor;
- (void)setDefaultPlaceholder:(id)a0 forBinding:(id)a1 onObjectClass:(Class)a2;
- (void)setDefaultTextColor:(id)a0;

@end
