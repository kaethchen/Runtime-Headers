@class NSArray;

@interface SPApplicationQueryResult : SPMetadataResult <NSSecureCoding> {
    unsigned __int128 _score;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *displayNameInitials;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)category;
- (unsigned __int128)score;
- (id)valueForAttribute:(id)a0;
- (id)groupName;
- (void)setScore:(unsigned __int128)a0;
- (id)initWithResult:(id)a0;
- (BOOL)isFile;
- (BOOL)isDir;
- (BOOL)isApplicationQueryResult;

@end
