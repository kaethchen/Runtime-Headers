@class NSString, NSUUID;

@interface SHKShareSheetSuggestionRequest : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSUUID *sessionID;
@property (readonly, nonatomic) BOOL isRestricted;
@property (readonly, nonatomic) BOOL isRTS;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 sessionID:(id)a1 isRestricted:(BOOL)a2 isRTS:(BOOL)a3;

@end
