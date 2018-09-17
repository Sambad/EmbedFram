class c_hw_cfg_base
{
	public :
	c_hw_cfg_base(void);
	~c_hw_cfg_base(void);

	config_systick(c_module_systick *pSystick);
	config_rcc(c_module_rcc *pRcc);

	config_usart(c_module_usart * pUsart);
	config_can(c_module_can *pCan);
	config_timer(c_module_timer *pTimer);
	config_fsmc(c_module_fsmc *pFsmc);
	config_sdio(c_module_sdio *pSdio);
	config_i2c(c_module_i2c *pI2c, bool bHost = true);
	config_spi(c_module_spi *pSpi);
	config_pwm(c_module_pwm *pPwm);
	config_usb(c_module_usb *pUsb, bool bHost = true);
	config_gpio(c_module_gpio *pGpio);
	config_exit(c_module_exit *pGpio);
	config_flash(c_module_flash *pFlash);
}
		
		
		
		
