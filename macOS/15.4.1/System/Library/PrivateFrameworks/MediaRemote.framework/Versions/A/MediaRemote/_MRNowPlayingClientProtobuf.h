@class NSString, _MRColorProtobuf, NSMutableArray;

@interface _MRNowPlayingClientProtobuf : PBCodable <NSCopying> {
    struct { unsigned char nowPlayingVisibility : 1; unsigned char processIdentifier : 1; unsigned char processUserIdentifier : 1; unsigned char isEmptyDeprecated : 1; } _has;
}

@property (nonatomic) BOOL hasProcessIdentifier;
@property (nonatomic) int processIdentifier;
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL hasParentApplicationBundleIdentifier;
@property (retain, nonatomic) NSString *parentApplicationBundleIdentifier;
@property (nonatomic) BOOL hasProcessUserIdentifier;
@property (nonatomic) int processUserIdentifier;
@property (nonatomic) BOOL hasNowPlayingVisibility;
@property (nonatomic) int nowPlayingVisibility;
@property (readonly, nonatomic) BOOL hasTintColor;
@property (retain, nonatomic) _MRColorProtobuf *tintColor;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSMutableArray *extendedBundleIdentifierHierarchys;
@property (nonatomic) BOOL hasIsEmptyDeprecated;
@property (nonatomic) BOOL isEmptyDeprecated;
@property (readonly, nonatomic) BOOL hasIconURL;
@property (retain, nonatomic) NSString *iconURL;

+ (Class)extendedBundleIdentifierHierarchyType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsNowPlayingVisibility:(id)a0;
- (void)addExtendedBundleIdentifierHierarchy:(id)a0;
- (void)clearExtendedBundleIdentifierHierarchys;
- (id)extendedBundleIdentifierHierarchyAtIndex:(unsigned long long)a0;
- (unsigned long long)extendedBundleIdentifierHierarchysCount;
- (id)nowPlayingVisibilityAsString:(int)a0;

@end
