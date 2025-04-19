@class NSString, NSMutableArray;

@interface _Node : NSObject {
    NSString *_identifier;
    id _representedObject;
    NSMutableArray *_children;
    NSMutableArray *_parents;
}

- (void)dealloc;
- (id)identifier;
- (void)setRepresentedObject:(id)a0;
- (void)addChild:(id)a0;
- (id)children;
- (id)representedObject;
- (id)parents;
- (void)addParent:(id)a0;
- (id)initWithIdentifier:(id)a0 withRepresentedObject:(id)a1;

@end
