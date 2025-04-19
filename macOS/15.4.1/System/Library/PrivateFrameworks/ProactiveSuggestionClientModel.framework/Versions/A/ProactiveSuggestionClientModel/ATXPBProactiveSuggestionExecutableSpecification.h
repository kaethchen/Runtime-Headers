@class NSData, NSString;

@interface ATXPBProactiveSuggestionExecutableSpecification : PBCodable <NSCopying> {
    unsigned long long _executableObjectHash;
    NSData *_executable;
    NSString *_executableClassString;
    NSString *_executableDescription;
    NSString *_executableIdentifier;
    int _executableType;
    struct { unsigned char executableObjectHash : 1; unsigned char executableType : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
