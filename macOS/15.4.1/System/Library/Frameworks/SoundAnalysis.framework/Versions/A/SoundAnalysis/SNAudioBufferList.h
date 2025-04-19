@interface SNAudioBufferList : NSObject {
    struct unique_ptr<CABufferList, std::default_delete<CABufferList>> { struct __compressed_pair<CABufferList *, std::default_delete<CABufferList>> { struct CABufferList *__value_; } __ptr_; } _ringBufferWriteBufferList;
}

+ (void)unownedViewOfRecentFramesWithSourceBuffer:(id)a0 destinationBuffer:(id)a1 numberOfRecentFrames:(unsigned int)a2;

- (void).cxx_destruct;
- (id)initWithFormat:(id)a0;
- (id).cxx_construct;
- (const struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)bufferList;

@end
