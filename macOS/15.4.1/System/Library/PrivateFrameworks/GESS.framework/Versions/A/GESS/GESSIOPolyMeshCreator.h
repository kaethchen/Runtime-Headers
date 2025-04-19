@class NSArray, NSDictionary, NSData, NSString;

@interface GESSIOPolyMeshCreator : NSObject {
    NSData *_positionData;
    NSData *_faceData;
    NSData *_vertexNormalData;
    NSData *_vertexNormalFaceData;
    NSData *_vertexColorData;
    NSData *_texCoordData;
    NSData *_texCoordFaceData;
    NSData *_faceGroupIDData;
    NSArray *_groupNameArray;
    NSDictionary *_groupIDToMaterialNameDict;
    NSString *_mtlFilePath;
}

- (void).cxx_destruct;
- (BOOL)clear;
- (BOOL)create:(id)a0;
- (BOOL)setGroupNames:(id)a0;
- (BOOL)setMtlFilePath:(id)a0;
- (BOOL)setFaceData:(id)a0;
- (BOOL)setFaceGroupIDData:(id)a0;
- (BOOL)setGroupIDToMaterialNameDict:(id)a0;
- (BOOL)setPositionData:(id)a0;
- (BOOL)setTexCoordData:(id)a0;
- (BOOL)setTexCoordFaceData:(id)a0;
- (BOOL)setVertexColorData:(id)a0;
- (BOOL)setVertexNormalData:(id)a0;
- (BOOL)setVertexNormalFaceData:(id)a0;

@end
