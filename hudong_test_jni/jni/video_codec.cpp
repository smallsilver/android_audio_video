#include "video_codec.h"

#ifdef __cplusplus
extern "C"{
#endif

//==============================================================================
/// @brief: ������Ƶ������
/// @param: video_codec_type_t codec_type ����
/// @param: uint16_t width ��Ƶ����
/// @param: uint16_t height ��Ƶ�߶�
/// @param: uint16_t bitrate ��������
/// @param: uint16_t framerate ֡��
/// @return:��Ƶ���������
///=============================================================================
VIDEO_CODEC_EXTERN video_encoder_t VIDEO_CODEC_API 
	create_video_encoder(video_codec_type_t codec_type,
	uint16_t width, uint16_t height, uint16_t bitrate, uint16_t framerate)
{

}

//==============================================================================
/// @brief: ������Ƶ������
/// @param: video_encoder_t handle ��Ƶ���������
/// @return:0-�ɹ� other-ʧ��
///=============================================================================
VIDEO_CODEC_EXTERN int32_t VIDEO_CODEC_API 
	destroy_video_encoder(video_encoder_t handle)
{
	
}	

//==============================================================================
/// @brief: �����չ���ݳ���
/// @param: video_encoder_t handle ��Ƶ���������
/// @return:��չ���ݳ���
///=============================================================================
VIDEO_CODEC_EXTERN uint32_t VIDEO_CODEC_API 
	video_encoder_extradata_size(video_encoder_t handle)
{
	
}	

//==============================================================================
/// @brief: �����չ����
/// @param: video_encoder_t handle ��Ƶ���������
/// @param: uint8_t* extradata ��չ����ָ��
/// @param: uint32_t extradata_size ��չ���ݳ���
/// @return:��չ���ݳ���
///=============================================================================
VIDEO_CODEC_EXTERN uint32_t VIDEO_CODEC_API 
	video_encoder_extradata(video_encoder_t handle, 
	uint8_t* extradata, uint32_t extradata_size)
{
	
}	

//==============================================================================
/// @brief: ��Ƶ����
/// @param: video_encoder_t handle ��Ƶ���������
/// @param: const uint8_t* in �����������
/// @param: uint32_t in_size ����������ݳ���
/// @param: uint8_t* out ���������ݻ�����
/// @param: uint32_t out_size ���������ݻ���������
/// @param: bool* got_frame ָʾ�Ƿ��ȡ����Ƶ֡
/// @param: video_frame_type_t* type ��Ƶ֡����
/// @return:��������ݳ���
///=============================================================================
VIDEO_CODEC_EXTERN uint32_t VIDEO_CODEC_API 
	video_encoder_encode(video_encoder_t handle, 
	const uint8_t* in, uint32_t in_size, uint8_t* out, uint32_t out_size, 
	video_frame_type_t* type)
{
	*type = VIDEO_FRAME_B;
}	

//==============================================================================
/// @brief: ������Ƶ������
/// @param: uint32_t codec_type ����
/// @param: color_space_t color ������ݵ�ɫ�ʿռ�����
/// @param: uint16_t width ��Ƶ����
/// @param: uint16_t height ��Ƶ�߶�
/// @return:��Ƶ���������
///=============================================================================
VIDEO_CODEC_EXTERN video_decoder_t VIDEO_CODEC_API 
	create_video_decoder(uint32_t codec_type, uint16_t width, uint16_t height)
{
	
}	

//==============================================================================
/// @brief: ������Ƶ������
/// @param: video_encoder_t handle ��Ƶ���������
/// @return:0-�ɹ� other-ʧ��
///=============================================================================
VIDEO_CODEC_EXTERN int32_t VIDEO_CODEC_API 
	destroy_video_decoder(video_decoder_t handle)
{
	
}	

//==============================================================================
/// @brief: ��Ƶ����
/// @param: video_decoder_t handle ��Ƶ���������
/// @param: const uint8_t* in �����������
/// @param: uint32_t in_size ����������ݳ���
/// @param: uint8_t* out ���������ݻ�����
/// @param: uint32_t out_size ���������ݻ���������
/// @return:��������ݳ���
///=============================================================================
VIDEO_CODEC_EXTERN uint32_t VIDEO_CODEC_API 
	video_decoder_decode(video_decoder_t handle, 
	const uint8_t* in, uint32_t in_size, 
	uint8_t* out, uint32_t out_size)
{
	
}	

#ifdef __cplusplus
}
#endif