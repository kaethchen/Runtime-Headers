@interface ICDObjectSendMessageImp : ICDBaseCommandImp {
    struct ICD_ObjectSendMessagePB { struct ICDHeader { short err; unsigned long long refcon; } header; unsigned int object; struct ICAObjectInfo { unsigned int objectType; unsigned int objectSubtype; } objectInfo; unsigned int connectionID; struct ICAMessage { unsigned int messageType; unsigned int startByte; void *dataPtr; unsigned int dataSize; unsigned int dataType; } message; unsigned int totalDataSize; unsigned int result; } _objectSendMessagePB;
}

- (id)process;
- (id)initWithPrivateData:(id)a0 commandData:(id)a1;
- (short)processDeleteOne:(struct ICD_ObjectSendMessagePB { struct ICDHeader { short x0; unsigned long long x1; } x0; unsigned int x1; struct ICAObjectInfo { unsigned int x0; unsigned int x1; } x2; unsigned int x3; struct ICAMessage { unsigned int x0; unsigned int x1; void *x2; unsigned int x3; unsigned int x4; } x4; unsigned int x5; unsigned int x6; } *)a0 object:(id)a1;

@end
