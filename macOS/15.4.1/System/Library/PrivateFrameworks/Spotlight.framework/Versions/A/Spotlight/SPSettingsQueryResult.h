@class NSArray;

@interface SPSettingsQueryResult : SPCoreSpotlightResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *displayNameInitials;

- (id)description;
- (void).cxx_destruct;
- (id)displayName;
- (id)category;
- (id)valueForAttribute:(id)a0;
- (id)groupName;
- (id)initWithResult:(id)a0;
- (BOOL)isFile;
- (BOOL)isDir;
- (id)copyrightString;
- (BOOL)isApplicationQueryResult;

@end
