@class NSString, NSMutableArray;

@interface TRILogTreatment : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _namespaceIds;
    struct { unsigned char deploymentId : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasExperimentId;
@property (retain, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) BOOL hasTreatmentId;
@property (retain, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) unsigned long long namespaceIdsCount;
@property (readonly, nonatomic) unsigned int *namespaceIds;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) unsigned int deploymentId;
@property (retain, nonatomic) NSMutableArray *namespaces;
@property (retain, nonatomic) NSMutableArray *namespaceNames;

+ (Class)namespaceNameType;
+ (Class)namespaceType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addNamespace:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addNamespaceId:(unsigned int)a0;
- (void)clearNamespaces;
- (unsigned long long)namespacesCount;
- (void)addNamespaceName:(id)a0;
- (void)clearNamespaceIds;
- (void)clearNamespaceNames;
- (id)namespaceAtIndex:(unsigned long long)a0;
- (unsigned int)namespaceIdAtIndex:(unsigned long long)a0;
- (id)namespaceNameAtIndex:(unsigned long long)a0;
- (unsigned long long)namespaceNamesCount;
- (void)setNamespaceIds:(unsigned int *)a0 count:(unsigned long long)a1;

@end
