@class NSString;

@interface NTPBTodayModuleContentRequest : PBRequest <NSCopying> {
    struct { unsigned char moduleDescriptorType : 1; } _has;
}

@property (nonatomic) BOOL hasModuleDescriptorType;
@property (nonatomic) int moduleDescriptorType;
@property (readonly, nonatomic) BOOL hasTagID;
@property (retain, nonatomic) NSString *tagID;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasNameColorLight;
@property (retain, nonatomic) NSString *nameColorLight;
@property (readonly, nonatomic) BOOL hasNameColorDark;
@property (retain, nonatomic) NSString *nameColorDark;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
