@class NSString, NSArray, VFXStateManager, NSMutableArray;

@interface VFXState : NSObject <NSSecureCoding> {
    NSMutableArray *_stateItems;
    VFXState *_baseState;
    NSString *_name;
    NSString *_identifier;
    VFXStateManager *_stateManager;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) VFXState *baseState;
@property (readonly, nonatomic) NSArray *stateItems;
@property (readonly, nonatomic) NSString *identifier;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)apply;
- (id)stateManager;
- (void)setStateManager:(id)a0;
- (id)itemMatching:(id)a0;
- (void)addStateItem:(id)a0;
- (id)makeReverseStates;
- (void)removeStateItem:(id)a0;

@end
