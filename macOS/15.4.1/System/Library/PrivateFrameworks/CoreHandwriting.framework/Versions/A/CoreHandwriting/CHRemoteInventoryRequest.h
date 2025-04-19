@class NSArray, CHTokenizedResult, NSSet, CHDrawing;

@interface CHRemoteInventoryRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CHDrawing *drawing;
@property (readonly, copy, nonatomic) CHTokenizedResult *tokenizedResult;
@property (readonly, copy, nonatomic) NSArray *strokeIdentifiers;
@property (readonly, copy, nonatomic) NSSet *removedStrokeIdentifiers;
@property (readonly, nonatomic) BOOL shouldResetInventory;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initResetInventoryRequest;
- (id)initWithRemovedStrokeIdentifiers:(id)a0;
- (id)initWithTokenizedResult:(id)a0 drawing:(id)a1 strokeIdentifiers:(id)a2;

@end
